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


public class naiveMain {
	public static void main(String[] args) {
		ArrayList<ArrayList> stockpile = new ArrayList();
		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
		Integer userInput = 10;
		while(userInput! = 0){
			try {
				userInput = Integer.parseInt(input.readLine());
			} catch (NumberFormatException | IOException e) 			{
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			naiveMultiplier test = new naiveMultiplier(userInput,10);
			stockpile.add(test.getArray());
			
			for(int i=0;i<10;i++){
			System.out.println((test.getArray().get(i)));
			}
		}
	}
}
