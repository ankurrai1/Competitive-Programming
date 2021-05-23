import java.util.*;


class Antenna{
    
    private int antennaId;
    private String antennaName;
    private String projectLead;
    private double antennaVSWR;
    
    Antenna(int aId, String an, String pl, double av){
        this.antennaId = aId;
        this.antennaName = an;
        this.projectLead = pl;
        this.antennaVSWR = av;
    }
    
    public int getAntennaId(){
        return this.antennaId;
    }
    
    public String getAntennaName(){
        return this.antennaName;
    }
    
    public String getProjectLead(){
        return this.projectLead;
    }
    
    public double getAntennaVSWR(){
        return this.antennaVSWR;
    }
}

class Main {
    
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        
        Antenna[] at = new Antenna[4];
        int aid;
        String an, pl;
        double avswr;
        for(int i = 0; i < 4; i++){
            aid = sc.nextInt(); sc.nextLine();
            an = sc.nextLine();
            pl = sc.nextLine();
            avswr = sc.nextDouble(); sc.nextLine();
            at[i] = new Antenna(aid, an, pl, avswr);
        }
        
        String antennaName = sc.nextLine() ;
        double antennaVSWR = sc.nextDouble();
        
        int res = findAntennaByName(at, antennaName);
        if(res == 0) System.out.println("No Antenna found by this name");
        else System.out.println(res);
        
        Antenna[] ats = sortAntennaByVSWR(at, antennaVSWR);
        if(ats == null) System.out.println("NO antenna found");
        else{
            for(int i = 0; i < ats.length; i++){
                System.out.println(ats[i].getProjectLead());
            }
            
        }
        
    }
    
     public static int findAntennaByName(Antenna[] arr, String name){
         for(int i = 0; i < arr.length; i++){
             if(arr[i].getAntennaName().equalsIgnoreCase(name)) return arr[i].getAntennaId();
         }
         return 0;
     }
     
     public static Antenna[] sortAntennaByVSWR(Antenna[] at, double VSWR){
        List<Antenna> ar = new ArrayList<>();
        
        for(int i = 0; i < at.length; i++){
            if(at[i].getAntennaVSWR() < VSWR) ar.add(at[i]);
        }
        
        if(ar.size() == 0) return null;
        
        Collections.sort(ar, new Sort());
        
        return ar.toArray(new Antenna[ar.size()]);
     }
}

class Sort implements Comparator<Antenna>{
    public int compare(Antenna a1, Antenna a2){
        return Double.compare(a1.getAntennaVSWR() , a2.getAntennaVSWR()); 
    }
}


// added variation of same function for sort

public static Antenna[] sortAntennaByVSWR(Antenna[] at, double VSWR){
        List<Antenna> ar = new ArrayList<>();
        
        for(int i = 0; i < at.length; i++){
            if(at[i].getAntennaVSWR() < VSWR) ar.add(at[i]);
        }
        
        if(ar.size() == 0) return null;
        
        Collections.sort(ar, new Comparator<Antenna>(){
            public int compare(Antenna a1, Antenna a2){
                return Double.compare(a1.getAntennaVSWR(), a2.getAntennaVSWR());
            };

        });
        
        return ar.toArray(new Antenna[ar.size()]);
     }