import javazoom.jl.player.Player;

import java.io.FileInputStream;
import java.util.Scanner;

public class MusicPlayer {
    FileInputStream song;
    Player dell;

    public MusicPlayer(String FileName) throws Exception {
        song = new FileInputStream(FileName);
        dell = new Player(song);
        System.out.println("Your  song is playing");
        dell.play();
    }

    public static void main (String args[]) throws Exception
    {
        System.out.println("-----------------------------NOW! presenting you a Music Player---------------------------------");
        System.out.println("*********** You can enter a song of your opt **************");
        System.out.println("1: Surah Tin");
        System.out.println("2: Surah Alaq");
        System.out.println("3: Surah Qadr");
        System.out.println("4: Surah Bayinah");
	System.out.println("5: Surah Zilzal");
        System.out.println("6: Surah Adiyat");
        System.out.println("7: Surah Qariah");
        System.out.println("8: Surah Takathur");
	System.out.println("9: Surah Asr");
        System.out.println("10: Surah Humazah");
        
        int opt;
        Scanner s = new Scanner(System.in);
        System.out.println(" enter the song of your opt: ");
        opt = s.nextInt();
        switch (opt) {
            case 1:
            
                MusicPlayer PLayer = new MusicPlayer("095.mp3");
                break;
            case 2:
            
                MusicPlayer PLayer1 = new MusicPlayer("096.mp3");
                break;
            case 3:
            
               MusicPlayer PLayer2 = new MusicPlayer("097.mp");
                break;
            
            case 4:
                MusicPlayer PLayer3 = new MusicPlayer("098.mp3");
                break;
	    
	    case 5:
            
                MusicPlayer PLayer4 = new MusicPlayer("99.mp3");
                break;
            case 6:
            
                MusicPlayer PLayer5 = new MusicPlayer("100.mp3");
                break;
            case 7:
            
               MusicPlayer PLayer6 = new MusicPlayer("101.mp");
                break;
            
            case 8:
                MusicPlayer PLayer7 = new MusicPlayer("102.mp3");
                break;
	    case 9:
            
                MusicPlayer PLayer8 = new MusicPlayer("103.mp");
                break;
            
            case 10:
                MusicPlayer PLayer9 = new MusicPlayer("104.mp3");
                break;
            
            
        }
    }
}
