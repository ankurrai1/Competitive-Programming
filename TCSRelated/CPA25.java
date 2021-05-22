import java.util.*;

class Bicycle{
    private String bicycleName;
    private String brand;
    private int cost;
    private int ageGroup;
    
    Bicycle(String bN, String brand, int cost, int ag){
        this.bicycleName = bN;
        this.brand = brand;
        this.cost = cost;
        this.ageGroup = ag;
    }
    
    public String getBicycleName(){
        return this.bicycleName;
    }
    
    public String getBrand(){
        return this.brand;
    }
    
    public int getCost(){
        return this.cost;
    }
    
    public int getAgeGroup(){
        return this.ageGroup;
    }
    
}
 
 
public class Main
{
	public static void main(String[] args) {
	    Bicycle[] bicycles = new Bicycle[4];
	    Scanner sc = new Scanner(System.in);
	    String n, b;
	    int c, ag;
		for(int i = 0; i < 4; i++){
		    n = sc.nextLine();
		    b = sc.nextLine();
		    c = sc.nextInt(); sc.nextLine();
		    ag = sc.nextInt(); sc.nextLine();
		    bicycles[i] = new Bicycle(n, b, c, ag);
		}
		
		String  brand = sc.nextLine();
		int ageGroup = sc.nextInt();
		
		sc.close();
		
		Bicycle[] res = findBicycleByAgeGrp(bicycles, ageGroup);
		if(res == null) System.out.println("No Bicycles found for given agegroup");
		else{
		    for(int i=0; i < res.length; i++){
		        System.out.println(res[i].getBicycleName());
		    }
		}
		
	    int totalCost = totalCostByBrand(bicycles, brand);
	    if(totalCost == 0) System.out.println("No bicycles found for given brand");
	    else System.out.println(totalCost);
	}
	
	public static int totalCostByBrand(Bicycle[] b, String brand){
	    int cost = 0;
	    for(int i = 0; i < b.length; i++){
	        if(b[i].getBrand().equals(brand)) cost += b[i].getCost();
	    }
	    return cost;
	}
	
	public static Bicycle[] findBicycleByAgeGrp(Bicycle[] b, int a){
	    List<Bicycle> ab = new ArrayList<>();
	    for(int i = 0; i < b.length; i++){
	        if(b[i].getAgeGroup() <= a) ab.add(b[i]);
	    }
	    if(ab.size() == 0) return null;
	    
	    Collections.sort(ab, new Sort());
	    
	    Bicycle[] res = ab.toArray(new Bicycle[ab.size()]);
	    return res;
	}
}

class Sort implements Comparator<Bicycle>{
    public int compare(Bicycle b1, Bicycle b2){
        return b2.getAgeGroup() - b1.getAgeGroup();
    }
}
