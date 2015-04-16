import java.util.ArrayList;


public class naiveMultiplier {
	int toMultiply;
	public naiveMultiplier(int val){
		toMultiply=val;

	}
	public ArrayList<Integer> getArray(){
		ArrayList<Integer> tblMulti = new ArrayList<Integer>();
		for(int i=0;i<10;i++){
			tblMulti.add(toMultiply*i+1);
		}
		return tblMulti;
		
	}
	
}
