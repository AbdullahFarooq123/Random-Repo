package View.Game;
import org.newdawn.slick.Sound;
import org.newdawn.slick.Music;
import org.newdawn.slick.SlickException;

import java.util.HashMap;

public class AudioPlayer {
    public static final HashMap<String, Sound> Sounds = new HashMap<> ( );
    public static final HashMap<String, Music> Music  = new HashMap<> ( );

    public static void LoadSound ( ) {
        try {
            Music.put ( "Menu Music" , new Music ( "Music\\cartoon_howling_ft._asena_ncs_release_mp3_49570.ogg" ) );
            Music.put ( "Game Music" , new Music ( "Music\\deaf_kev_invincible_ncs_release_mp3_56920.ogg" ) );
            Music.put ( "Won Music" , new Music ( "Music\\tobu_candyland_ncs_release_mp3_56925.ogg" ) );
            Sounds.put ( "OOH" , new Sound ( "Music\\ooh_sound_effect_mp3_57240.ogg" ) );

        } catch (SlickException e) {
            e.printStackTrace ( );
        }
    }

    public static Music getMusic ( String music ) {
        return Music.get ( music );
    }

    public static Sound getSound ( String Sound ) {
        return Sounds.get ( Sound );
    }
}
