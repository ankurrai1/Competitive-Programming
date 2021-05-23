import java.util.*;

class Desktop{
    private int desktopId;
    private String brandName;
    private String osType;
    private double price;
    
    Desktop(int id, String bn, String os, double price){
        this.desktopId = id;
        this.brandName = bn;
        this.osType = os;
        this.price = price;
    }
    
    public int getDesktopId(){
        return this.desktopId;
    }
    
    public String getBrandName(){
        return this.brandName;
    }
    
    public String getOsType(){
        return this.osType;
    }
    
    public double getPrice(){
        return this.price;
    }
    
}

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Desktop[] d = new Desktop[4];
        int id;
        String b, os;
        double price;
        for(int i = 0; i < 4; i++){
            id = sc.nextInt(); sc.nextLine();
            b = sc.nextLine();
            os = sc.nextLine();
            price = sc.nextDouble(); sc.nextLine();
            
            d[i] = new Desktop(id, b, os, price);
        }
        
        String brand = sc.nextLine();
        String osType = sc.nextLine();
        
        sc.close();
        
        int res = findAveragePriceByBrand(d, brand);
        if(res > 0) System.out.println(res);
        else System.out.println("The Given Brand is not Available");
        
        Desktop[] r = searchDesktopByOS(d, osType);
        if(r == null) System.out.println("The Given OS is not Available");
        else{
            for(int i = 0; i < r.length; i++){
                System.out.println(r[i].getDesktopId());
                System.out.println(r[i].getBrandName());
                System.out.println(r[i].getPrice());
            }
        }
    }
    
    public static int findAveragePriceByBrand(Desktop[] arr, String b){
        int count = 0;
        double tp = 0.0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i].getBrandName().equalsIgnoreCase(b)){
                count += 1;
                tp += arr[i].getPrice();
            }
        }
        if(count == 0) return 0;
        return ((int)tp/(int)count);
    }
    
    public static Desktop[] searchDesktopByOS(Desktop[] d, String os){
        List<Desktop> r = new ArrayList<>();
        for(int i = 0; i < d.length; i++){
            if(d[i].getOsType().equalsIgnoreCase(os)) r.add(d[i]);
        }
        
        if(r.size() == 0) return null;
        
        Collections.sort(r, new Comparator<Desktop>(){
            public int compare(Desktop d1, Desktop d2){
                return d2.getDesktopId() - d1.getDesktopId();
            }
        });
        
        return r.toArray(new Desktop[r.size()]);
        
    }
}