import java.util.*;

class EduProgram{
    private String eduProgramName;
    private String sponsor;
    private int noOfPeopleAttended;
    private boolean stillAvailable;
    private boolean withinCountry;
    
    EduProgram(String eduProgramName, String sponsor, int noOfPeopleAttended, boolean stillAvailable, boolean withinCountry){
        this.eduProgramName = eduProgramName;
        this.sponsor = sponsor;
        this.noOfPeopleAttended = noOfPeopleAttended;
        this.stillAvailable = stillAvailable;
        this.withinCountry = withinCountry;
    }
    
    public String getEduProgramName(){
        return this.eduProgramName;
    }
    
    public String getSponsor(){
        return this.sponsor;
    }
    
    public int getNoOfPeopleAttended(){
        return this.noOfPeopleAttended;
    }
    
    public boolean getStillAvailable(){
        return this.stillAvailable;
    }
    
    public boolean getWithinCountry(){
        return this.withinCountry;
    }
}


public class Main
{
	public static void main(String[] args) {
	    
	    EduProgram[] ep = new EduProgram[4];
	    Scanner sc = new Scanner(System.in);
	    
	    String epn, s;
	    boolean sa, wc;
	    int cp;
	    
	    for(int i = 0; i < 4; i++){
	        
	        epn = sc.nextLine();
	        s = sc.nextLine();
	        cp = sc.nextInt(); sc.nextLine();
	        sa = sc.nextBoolean(); sc.nextLine();
	        wc = sc.nextBoolean(); sc.nextLine();
	        ep[i] = new EduProgram(epn, s, cp, sa, wc);
	        
	    }
	    
	    String sponsorAsked = sc.nextLine();
	    sc.close();
	    
	    String status = findEduProgramClassification(ep);
	    if(status == null){
	        System.out.println("Edu Programs are not Available now.");
	    }
	    else{
	        System.out.println(status);
	    }
	    
	    EduProgram[] edp = findEduProgramBySponsor(ep, sponsorAsked);
	    if(edp == null){
	        System.out.println("No edu program is Available Sponsor");
	    }
	    else{
	        for(int i = 0; i < edp.length; i++){
	            System.out.println(edp[i].getEduProgramName());
	            System.out.println(edp[i].getNoOfPeopleAttended());
	        }
	    }
	}
	
	public static String findEduProgramClassification(EduProgram[] ep){
	    for(int i = 0; i < ep.length; i++){
	        if(ep[i].getWithinCountry() && ep[i].getStillAvailable()){
	            int np = ep[i].getNoOfPeopleAttended();
	            if(np >= 1000) return "EverGreen";
	            if(np < 1000 && np >= 500) return "Golden";
	            if(np < 500) return "Emerging Star";
	        }
	    }
	    return null;
	}
	
	public static EduProgram[] findEduProgramBySponsor(EduProgram[] ep, String s){
	    List<EduProgram> n = new ArrayList<>();
	    for(int i = 0; i < ep.length; i++){
	        if(ep[i].getSponsor().equalsIgnoreCase(s)) n.add(ep[i]);
	    }
	    if(n.size() == 0) return null;
	    Collections.sort(n ,new Sort());
	    return n.toArray(new EduProgram[n.size()]);
	}
}

class Sort implements Comparator<EduProgram>{
    public int compare(EduProgram ep1, EduProgram ep2){
        return ep1.getNoOfPeopleAttended() - ep2.getNoOfPeopleAttended();
    }
}
