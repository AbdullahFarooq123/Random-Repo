package View.Game;

import java.awt.*;

public abstract class GameObject {

    protected float XCoordinate;
    protected float YCoordinate;
    protected float XVelocity;
    protected float YVelocity;
    protected ID    id;

    public GameObject ( float XCoordinate , float YCoordinate , ID id ) {
        this.XCoordinate = XCoordinate;
        this.YCoordinate = YCoordinate;
        this.id          = id;
    }

    protected GameObject ( ) {
    }

    public abstract void tick ( );

    public abstract void render ( Graphics G );

    public abstract Rectangle getBounds ( );

    public ID getId ( ) {
        return id;
    }

    public void setXVelocity ( int XVelocity ) {
        this.XVelocity = XVelocity;
    }

    public void setYVelocity ( int YVelocity ) {
        this.YVelocity = YVelocity;
    }

    public float getXCoordinate ( ) {
        return XCoordinate;
    }

    public float getYCoordinate ( ) {
        return YCoordinate;
    }

}
