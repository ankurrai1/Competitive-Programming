import java.util.*;


class Theater{
    
    private int theaterId;
    private String theaterName;
    private int seatCapacity;
    private double ticketRate;
    private double theaterRating;
    private boolean balconyAvailable;
    
    Theater(int id, String n, int sc, double p, double r, boolean ba){
        this.theaterId = id;
        this.theaterName = n;
        this.seatCapacity = sc;
        this.ticketRate = p;
        this.theaterRating = r;
        this.balconyAvailable = ba;
    }
    
    public int getTheaterId(){
        return this.theaterId;
    }
    
    public String getTheaterName(){
        return this.theaterName;
    }
    
    public int getSeatCapacity(){
        return this.seatCapacity;
    }
    
    public double getTicketRate(){
        return this.ticketRate;
    }
    
    public double getTheaterRating(){
        return this.theaterRating;
    }
    
    public boolean getBalconyAvailable(){
        return this.balconyAvailable;
    }
}



class Main{
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Theater[] t = new Theater[4];
        
        String n;
        int id, se;
        double p, ra;
        boolean ba;
        
        for(int i = 0; i < 4; i++){
           id = sc.nextInt(); sc.nextLine();
           n = sc.nextLine();
           se = sc.nextInt(); sc.nextLine();
           p = sc.nextDouble(); sc.nextLine();
           ra = sc.nextDouble(); sc.nextLine();
           ba = sc.nextBoolean(); sc.nextLine();
           
           t[i] = new Theater(id, n, se, p, ra, ba);
        }
        int theaterId = sc.nextInt(); sc.nextLine();
        int seatCapacity  = sc.nextInt();
        sc.close();
        
        String res = findTheaterCategory(t, theaterId );
        if(res == null ) System.out.println("There is no theater with Given Theater ID");
        else System.out.println(res);
        
        Theater[] r = searchTheaterByCapacity(t, seatCapacity);
        if(r == null) System.out.println("Only low Capacity Theater Available");
        else{
            for(int i = 0; i < r.length; i++){
                System.out.println(r[i].getTheaterId());
            }
        }
        
    }
    
    public static String findTheaterCategory(Theater[] arr, int id){
        for(int i = 0; i <arr.length; i++ ){
            if(arr[i].getTheaterId() == id){
                boolean balcony = arr[i].getBalconyAvailable();
                double rating = arr[i].getTheaterRating();
                if(balcony && rating > 4.00) return "Ultra Premium";
                else if(balcony && rating >= 3 && rating <= 4) return "Premium";
                else return "Normal";
            }
        }
        return null;
    }
    
    public static Theater[] searchTheaterByCapacity(Theater[] arr, int capacity){
        List<Theater> t = new ArrayList<>();
        for(int i = 0; i < arr.length; i++){
            if(arr[i].getSeatCapacity() > capacity ) t.add(arr[i]);
        }
        if(t.size() == 0) return null;
        
        Collections.sort(t,new Comparator<Theater>(){
            public int compare(Theater t1, Theater t2){
                return Double.compare(t1.getTicketRate(), t2.getTicketRate());
            }
        });
        
        return t.toArray(new Theater[t.size()]);
    }
}