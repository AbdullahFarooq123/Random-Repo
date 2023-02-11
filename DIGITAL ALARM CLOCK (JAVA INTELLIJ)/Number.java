public class Number{
	private int limit;
	private int value;
	public Number(int limit){
		this.limit=limit;
	}
	public void increment(){
		value=((value+1)%limit);
	}
	public int getValue(){
		return value;
	}
	public void setValue(int value){
		if((value>=0)&&(value<limit))
			this.value=value;
	}
	public String getDisplayValue(){
		if(value<10)
			return "0"+value;
		else
			return ""+value;
	}
}