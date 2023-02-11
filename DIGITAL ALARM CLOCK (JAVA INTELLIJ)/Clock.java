import java.util.concurrent.TimeUnit;
public class Clock{
	private Number minute;
	private Number hour;
	private Number second;
	private String display;
	private int day,alarmH,alarmM,alarmDay;
	public Clock(){
		day=0;
		minute=new Number(60);
		hour=new Number(13);
		hour.setValue(hour.getValue()+12);
		second=new Number(60);
		alarmH=30;
		alarmM=70;
	}
	public void tick(){
		second.increment();
		if(second.getValue()==0){
			minute.increment();
			if(minute.getValue()==0)
				hour.increment();
		}
		updateDisplay();
	}
	public void settings(int h,int m,String day){
		minute.setValue(m);
		hour.setValue(h);
		if(day=="AM"||day=="am"||day=="Am"||day=="aM"){
			if(h==12&&m==0)
				this.day=1;
			else
				this.day=0;
		} else if(day=="PM"||day=="pm"||day=="Pm"||day=="pM"){
			if(h==12&&m==0)
				this.day=1;
			else
				this.day=0;
		} else {
			System.out.println("[ERROR] Invalid AM/PM. Default Value Is AM");
			System.out.println("[ERROR] Clock Will Start After 5 Seconds");
			if(h==12&&m==0)
				this.day=1;
			else
				this.day=0;
			try{
				TimeUnit.SECONDS.sleep(5);
			} catch (Exception E) {
				System.out.print("");
			}
			try{
				new ProcessBuilder("cmd.exe","/c","cls").inheritIO().start().waitFor();
			} catch (Exception E) {
				System.out.print("");
			}
		}
		updateDisplay();
	}
	public void updateDisplay(){
		if(hour.getValue()==0)
			hour.setValue(1);
		if((hour.getValue()==12)&&(minute.getValue()==0)&&(second.getValue()==0)){
			if(day==0)
				day=1;
			else
				day=0;
		}
		if(day==0){
			display=hour.getDisplayValue()+":"+minute.getDisplayValue()+":"+second.getDisplayValue()+" AM";
		} else {
			display=hour.getDisplayValue()+":"+minute.getDisplayValue()+":"+second.getDisplayValue()+" PM";
		}
	}
	public String display(){
		if(hour.getValue()==alarmH&&minute.getValue()==alarmM){
			MusicOrganizer m=new MusicOrganizer();
			m.playTrack(1);
		}
		return display;
	}
	public void setAlarm(int h,int m,String day){
		if(day=="AM"||day=="am"||day=="Am"||day=="aM"){
			alarmDay=0;
		} else if(day=="PM"||day=="pm"||day=="Pm"||day=="pM"){
			alarmDay=1;
		} else {
			System.out.println("[ERROR] Invalid AM/PM. Default Value For Alarm Is AM");
			System.out.println("[ERROR] Clock Will Start After 5 Seconds");
			alarmDay=0;
			try{
				TimeUnit.SECONDS.sleep(5);
			} catch (Exception E) {
				System.out.print("");
			}
			try{
				new ProcessBuilder("cmd.exe","/c","cls").inheritIO().start().waitFor();
			} catch (Exception E) {
				System.out.print("");
			}
		}
		alarmH=h;
		alarmM=m;
	}
}