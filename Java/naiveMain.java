
public class naiveMain {
	public static void main(String[] args) {
		naiveMultiplier test = new naiveMultiplier(7);
		for(int i=0;i<10;i++){
			System.out.println((test.getArray().get(i)));
		}
	}
}
