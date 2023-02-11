public class calenderEngine{
    public void Run()throws Exception{
        clockManager ClockManager = new clockManager();
        calendarManager CalendarManager = new calendarManager();
        ClockManager.Input();
        CalendarManager.Input();
        while (true) {
            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            ClockManager.printClock();
            CalendarManager.printCalendar();
            Thread.sleep(1000);
            ClockManager.getClockController();
            CalendarManager.getController();
        }
    }
}
