import java.util.*;

class Engine{
    private int engineId;
    private String engineName;
    private String engineType;
    private double enginePrice;
    
    Engine(int id, String n, String t, double p){
        this.engineId = id;
        this.engineName = n;
        this.engineType = t;
        this.enginePrice = p;
    }
    
    public int getEngineId(){
        return this.engineId;
    }
    
    public String getEngineName(){
        return this.engineName;
    }
    
    public String getEngineType(){
        return this.engineType;
    }
    
    public double getEnginePrice(){
        return this.enginePrice;
    }
}


class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Engine[] e = new Engine[4];
        int id;
        String name , type;
        double price;
        for(int i = 0; i < 4; i++){
            id = sc.nextInt(); sc.nextLine();
            name = sc.nextLine();
            type = sc.nextLine();
            price = sc.nextDouble(); sc.nextLine();
            
            e[i] = new Engine(id, name, type, price);
        }
        
        String givenType = sc.nextLine();
        String givenName = sc.nextLine();
        
        sc.close();
        
        int res = findAvgEnginePriceByType(e, givenType);
        if(res == 0) System.out.println("There is no Engine found with givne Type");
        else System.out.println(res);
        
        Engine[] engine = searchEngineByName(e, givenName);
        if(engine == null) System.out.println("There is no enging found by this name");
        else{
            for(int i = 0; i< engine.length; i++)
            System.out.println(engine[i].getEngineId());
        }
    }
    
    public static int findAvgEnginePriceByType(Engine[] e, String type){
        int price = 0,
        count = 0;
        for(int i = 0; i < e.length; i++)
        {
            if(e[i].getEngineType().equalsIgnoreCase(type)){
                price += e[i].getEnginePrice();
                count += 1;
            }
        }
        if(count == 0) return 0;
        return price/count;
    }
    
    public static Engine[] searchEngineByName(Engine[] e, String n){
        List<Engine> res = new ArrayList<>();
        for(int i = 0; i < e.length; i++){
            if(e[i].getEngineName().equalsIgnoreCase(n)) res.add(e[i]);
        }
        if(res.size() == 0) return null;
        Collections.sort(res, new Comparator<Engine>(){
            public int compare(Engine e1, Engine e2){
                return e1.getEngineId() - e2.getEngineId();
            }
        });
        
        return res.toArray(new Engine[res.size()]);
    }
    

}