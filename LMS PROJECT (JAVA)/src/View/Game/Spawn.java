package View.Game;

import java.awt.*;

public class Spawn {

    public static int     scoreKeep   = 0;
    public static int     ChangeLevel = 250;
    private final Handler handler;
    private final HUD     hud;
    private final Color[] color       = {Color.CYAN , Color.BLUE , Color.GRAY , Color.darkGray};

    public Spawn ( Handler handler , HUD hud ) {
        this.handler = handler;
        this.hud     = hud;
    }

    public void tick ( ) {
        scoreKeep++;
        if ( scoreKeep >= ChangeLevel ) {
            hud.setLevel ( hud.getLevel ( ) + 1 );
            if ( scoreKeep == ChangeLevel ) {
                scoreKeep = 0;
                ChangeLevel += 250;
            }
            int velocityX = 5;
            int velocityY = 5;
            String[] Enemy = {"Enemy" , "AI Enemy" , ""};
            if ( Game.GameDifficulty == Game.Difficulty.Normal ) {
                if ( hud.getLevel ( ) == 2 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX , velocityY , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 3 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX , velocityY , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 4 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX , velocityY , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 5 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX , velocityY , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 6 ) {
                    Game.GameState = Game.State.FastEnemy;
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 1 , velocityY + 1 , Color.CYAN ) );
                    HUD.Health = 100;
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 7 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX , velocityY , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 8 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 3 , velocityY + 3 , Color.CYAN ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 9 ) {
                    Game.GameState = Game.State.AIEnemy;
                    HUD.Health     = 100;
                    Calculations.ClearObjects ( );
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX , velocityY , Color.BLUE ) );
                    for ( int i = 0 ; i < 4 ; i++ )
                          Handler.addObject ( _Enemy ( Enemy[1] , 1 , 1 , color[i] ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 10 ) {
                    Game.GameState = Game.State.BossLevel;
                    HUD.Health     = 100;
                    Handler.addObject ( _Enemy ( Enemy[2] , 0 , 0 , null ) );
                }
                if ( hud.getLevel ( ) == 11 ) {
                    Calculations.ClearAllObjects ( );
                    Game.GameState = Game.State.Won;
                }
            }
            if ( Game.GameDifficulty == Game.Difficulty.Hard ) {
                if ( hud.getLevel ( ) == 2 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 3 , velocityY + 3 , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 3 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 3 , velocityY + 3 , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 4 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 3 , velocityY + 3 , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 5 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 4 , velocityY + 4 , Color.CYAN ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 6 ) {
                    Game.GameState = Game.State.FastEnemy;
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 3 , velocityY + 3 , Color.BLUE ) );
                    HUD.Health = 100;
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 7 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 3 , velocityY + 3 , Color.BLUE ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 8 ) {
                    Handler.addObject ( _Enemy ( Enemy[0] , velocityX + 7 , velocityY + 7 , Color.CYAN ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 9 ) {
                    Game.GameState = Game.State.AIEnemy;
                    for ( int i = 0 ; i < 4 ; i++ )
                          Handler.addObject ( _Enemy ( Enemy[1] , 2 , 2 , color[i] ) );
                    Game.changeColors++;
                }
                else if ( hud.getLevel ( ) == 10 ) {
                    Game.GameState = Game.State.BossLevel;
                    Handler.addObject ( _Enemy ( Enemy[2] , 0 , 0 , null ) );
                }
                if ( hud.getLevel ( ) == 11 ) {
                    Calculations.ClearAllObjects ( );
                    Game.GameState = Game.State.Won;
                }
            }
        }
    }

    private GameObject _Enemy ( String Enemy , int VelocityX , int VelocityY , Color color ) {
        if ( Enemy.equals ( "Enemy" ) ) {
            return new Enemy ( Calculations.spawnEnemyX ( ) , Calculations.spawnEnemyY ( ) , ID.Enemy , VelocityX , VelocityY , color );
        }
        else if ( Enemy.equals ( "AI Enemy" ) ) {
            return new AIEnemy ( Calculations.spawnEnemyX ( ) , Calculations.spawnEnemyY ( ) , ID.AIEnemy , color , VelocityX , VelocityY );
        }
        else {
            Calculations.ClearObjects ( );
            return new Boss ( ( float ) Game.Width / 2 - 60 , - 120 , ID.Boss , handler );
        }
    }
}
