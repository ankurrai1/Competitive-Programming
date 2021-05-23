import java.util.*;

class Songs{
    private String songName;
    private int duration;
    private String artist;
    private String language;
    private double rating;
    
    Songs(String sn, int d, String a, String l, double r){
        this.songName = sn;
        this.duration = d;
        this.artist = a;
        this.language = l;
        this.rating = r;
    }
    
    public String getSongName(){
        return this.songName;
    }
    public int getDuration(){
        return this.duration;
    }
    
    public String getArtist(){
        return this.artist;
    }
    
    public String getLanguage(){
        return this.language;
    }
    
    public double getRating(){
        return this.rating;
    }
}


class Main{
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        Songs[] s = new Songs[5];
        
        int d;
        String sn, a, l;
        double r;
        
        for(int i = 0; i < 5; i++){
            sn = sc.nextLine();
            d = sc.nextInt(); sc.nextLine();
            a = sc.nextLine(); 
            l = sc.nextLine();
            r = sc.nextDouble(); sc.nextLine();
            
            s[i] = new Songs(sn, d , a, l, r);
        }
        
        String lang = sc.nextLine();
        String artist = sc.nextLine();
        
        sc.close();
        
        String[] songs = findSongsBasedOnLanguage(s, lang);
        if(songs == null) System.out.println("There is no song found in given language");
        else{
            for(int i = 0; i < songs.length; i++){
                System.out.println(songs[i]);
            }
        }
        
        Songs[] res = findSongsBasedOnArtists(s, artist);
        if(res == null) System.out.println("There is no song found with given artist");
        else{
            for(int i = 0; i < res.length; i++){
                System.out.println(res[i].getSongName());
                System.out.println(res[i].getRating());
            }
        }
    }
    
    
    public static String[] findSongsBasedOnLanguage(Songs[] s, String lang){
        List<String> res = new ArrayList<>();
        for(int i = 0; i < s.length; i++){
            if(s[i].getLanguage().equalsIgnoreCase(lang)){
                res.add(s[i].getSongName());
            }
        }
        if(res.size() == 0) return null;
        return res.toArray(new String[res.size()]);
    }
    
    public static Songs[] findSongsBasedOnArtists(Songs[] s, String a){
        List<Songs> res = new ArrayList<>();
        for(int i = 0; i< s.length; i++){
            if(s[i].getArtist().equalsIgnoreCase(a)) res.add(s[i]);
        }
        
        if(res.size() == 0) return null;
        
        Collections.sort(res, new Comparator<Songs>(){
           public int compare(Songs s1, Songs s2){
               return Double.compare(s1.getRating(), s2.getRating());
           } 
        });
        
        return res.toArray(new Songs[res.size()]);
    }
}