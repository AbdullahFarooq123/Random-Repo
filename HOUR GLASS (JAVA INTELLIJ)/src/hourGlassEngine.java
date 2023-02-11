public class hourGlassEngine{
    public void run(){
        hourGlass HourGlass = new hourGlass();
        HourGlass.logic();
        HourGlass.printArray();
        System.out.println("Sum of hour glass are : " + HourGlass.getNoOfHourGlass());
        System.out.println("Total number of hour glasses are : " + HourGlass.getNoOfHourGlass().size());
        System.out.println("The highest sum of hour glass is : " + HourGlass.calculateMaximumSum());
    }
}
