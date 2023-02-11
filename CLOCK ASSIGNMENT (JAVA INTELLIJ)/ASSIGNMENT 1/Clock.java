public class Clock {
    public static boolean dayIncrement = false;
    private final Digit hours;
    private final Digit minutes;
    private final Digit seconds;
    private String dayTime;

    public Clock(int minLimit, int maxLimit, int minHours, int maxHours) {
        hours = new Digit(minHours, maxHours);
        minutes = new Digit(minLimit, maxLimit);
        seconds = new Digit(minLimit, maxLimit);
    }

    public void setClock(int hours, int minutes, int seconds, String dayTime, int initialLimit) {
        this.hours.setMinLimit(hours);
        this.minutes.setMinLimit(minutes);
        this.seconds.setMinLimit(seconds);
        this.dayTime = dayTime;
        this.hours.setInitialLimit(initialLimit);
    }

    public void setMaxHours(int maxHours) {
        hours.setMaxLimit(maxHours);
    }

    public void setMinHours(int minHours) {
        hours.setMinLimit(minHours);
    }

    public void getDisplay() {
        System.out.print(setDisplay());
    }

    private String getDayTime() {
        return dayTime;
    }

    private String setDisplay() {
        return hours.getDigits() + " : " + minutes.getDigits() + " : " + seconds.getDigits() + " " + getDayTime();
    }

    public void clockController() {
        seconds.controller();
        if (seconds.getMinLimit() == 0)
            minutes.controller();
        if (minutes.getMinLimit() == 0 && seconds.getMinLimit() == 0) {
            hours.controller();
            dayIncrement = hours.getMinLimit() == 0 && minutes.getMinLimit() == 0 && seconds.getMinLimit() == 0;

        } else dayIncrement = false;

        if (hours.getMinLimit() == 1 && minutes.getMinLimit() == 0 && seconds.getMinLimit() == 0 && getDayTime().equals("am ")) {
            dayTime = "pm ";
            dayIncrement=false;
        } else if (hours.getMinLimit() == 1 && minutes.getMinLimit() == 0 && seconds.getMinLimit() == 0 && getDayTime().equals("pm ")) {
            dayTime = "am ";
            dayIncrement=true;
        }
    }

}
