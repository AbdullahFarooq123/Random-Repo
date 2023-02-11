import java.util.concurrent.TimeUnit;
public class Main{
	public static void main(String[] args){
		Clock clock = new Clock();
		clock.settings(11,59,"AM");
		clock.setAlarm(12,0,"PM");
		do{
			clock.tick();
			System.out.println(clock.display());
			try{
				TimeUnit.SECONDS.sleep(1);
			} catch (Exception E) {
				System.out.print("");
			}
			try{
				new ProcessBuilder("cmd.exe","/c","cls").inheritIO().start().waitFor();
			} catch (Exception E) {
				System.out.print("");
			}
		}while(true);
	}
}