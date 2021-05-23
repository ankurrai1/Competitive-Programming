import java.util.*;

class ServiceCenter{
    private String serviceCenterName;
    private String branch;
    private double amountCharged;
    private boolean availableOnline;
    
    ServiceCenter(String n, String b, double ac, boolean o){
        this.serviceCenterName = n;
        this.branch = b;
        this.amountCharged = ac;
        this.availableOnline = o;
    }
    
    public String getServiceCenterName(){
        return this.serviceCenterName;
    }
    
    public String getBranch(){
        return this.branch;
    }
    
    public double getAmountCharged(){
        return this.amountCharged;
    }
    
    public boolean getAvailableOnline(){
        return this.availableOnline;
    }
} 

class Main{
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ServiceCenter[] s = new ServiceCenter[4];
        String n, b;
        double ac;
        boolean o;
        for(int i = 0; i < 4; i++){
            n = sc.nextLine();
            b = sc.nextLine();
            ac = sc.nextDouble(); sc.nextLine();
            o = sc.nextBoolean(); sc.nextLine();
            s[i] = new ServiceCenter(n, b, ac, o);
        }
        
        String prefix = sc.nextLine();
        
        int res = findAvarageCostOnlineServeceCenter(s);
        if(res > 0) System.out.println(res);
        else System.out.println("No Online Service Center found");
        
        ServiceCenter[] r = findServiceCenters(s, prefix);
        if(r == null) System.out.println("No service Center found matching to given string");
        else{
            for(int i =0; i < r.length; i++){
                System.out.println(r[i].getServiceCenterName());
                System.out.println(r[i].getAmountCharged());
            }
        }
    }
    
    public static int findAvarageCostOnlineServeceCenter(ServiceCenter[] arr){
        int c = 0; double amount = 0.0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i].getAvailableOnline()){
                c += 1;
                amount += arr[i].getAmountCharged();
            }
        }
        if(c == 0 ) return 0;
        return (int)amount / c;
    }
    
    public static ServiceCenter[] findServiceCenters(ServiceCenter[] arr, String p){
        List<ServiceCenter> res = new ArrayList<>();
        for(int i =0; i< arr.length; i++){
            if(arr[i].getBranch().startsWith(p)) res.add(arr[i]);
        }
        
        if(res.size() == 0) return null;
        
        Collections.sort(res, new Comparator<ServiceCenter>(){
            public int compare(ServiceCenter s1, ServiceCenter s2){
                return Double.compare(s2.getAmountCharged(), s1.getAmountCharged());
            }
        });
        
        return res.toArray(new ServiceCenter[res.size()]);
    }
    
}