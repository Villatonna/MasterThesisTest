import java.util.ArrayList;


public class naiveMultiplier {
	int toMultiply;
	public naiveMultiplier(int val){
		toMultiply=val;

	}
	public ArrayList<Integer> getArray(){
		#Create Arraylist object, which stores results
		ArrayList<Integer> tblMulti = new ArrayList<Integer>();
		for(int i=0;i<10;i++){
			tblMulti.add(toMultiply*i+1);
		}
		return tblMulti;
		
	}
	
}

public class naiveMain {
	public static void main(String[] args) {
		int userinput=Integer.parseInt(args[0]);
		naiveMultiplier test = new naiveMultiplier(10);
		for(int i=0;i<userinput;i++){
			System.out.println((test.getArray().get(i)));
		}
	}
}

