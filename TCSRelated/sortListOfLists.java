import java.util.*;


class ListComparator implements Comparator<List<Integer>> {

  @Override
  public int compare(List<Integer> l1, List<Integer> l2) {
      double a = Math.sqrt(Math.pow(l1.get(0), 2) + Math.pow(l1.get(1), 2));
      double b = Math.sqrt(Math.pow(l2.get(0), 2) + Math.pow(l2.get(1), 2));
      return Double.compare(a,b);
  }

}

public class Main
{
    
   public static List<List<Integer>> getrouts(List<List<Integer>> all, int del){
        
        Collections.sort(all, new ListComparator());
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        for(int i = 0; i < del; i++) res.add(all.get(i));
        return res;
    }
    
	public static void main(String[] args) {
	    
	     List<List<Integer>> data = new ArrayList<List<Integer>>();
	     
	     List<Integer> list1 = new ArrayList<Integer>();
	     list1.add(1);
	     list1.add(2);
	     data.add(list1);
	     
	     List<Integer> list2 = new ArrayList<Integer>();
	     list2.add(3);
	     list2.add(4);
	     data.add(list2);
 
        List<Integer> list3 = new ArrayList<Integer>();
	    list3.add(1);
	    list3.add(-1);
	    data.add(list3);

	    
	    System.out.print( getrouts(data, 2));
		
	}
}
