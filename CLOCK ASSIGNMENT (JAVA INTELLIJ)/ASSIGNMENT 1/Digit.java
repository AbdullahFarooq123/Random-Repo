public class Digit {
    private int minLimit ;
    private int maxLimit ;
    private int initialLimit ;

    public Digit(){
    }

    public Digit (int minLimit , int maxLimit ){
        this.minLimit = minLimit ;
        this.maxLimit = maxLimit ;
    }

    public int getMinLimit(){
        return minLimit;
    }

    public void setMinLimit(int minLimit){
        this.minLimit=minLimit;
    }

    public void setMaxLimit(int maxLimit){
        this.maxLimit=maxLimit;
    }

    public void setInitialLimit(int initialLimit){
        this.initialLimit=initialLimit;
    }

    private void increment(){
        minLimit++;
    }

    public void controller(){
        increment();
        if (minLimit>=maxLimit)
            minLimit=initialLimit;
    }

    public String getDigits (){
        if (minLimit<10)
            return "0" + minLimit ;
        else
            return "" + minLimit ;
    }
}
