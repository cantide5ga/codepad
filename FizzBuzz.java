package forfun;

import java.util.stream.IntStream;

public class FizzBuzz {

	public static void main(String[] args) {
		IntStream.range(1, 101).forEach(i -> output(i));

	}
	
	private static void output(int i) {
		if((i % 3) != 0 && (i % 5) != 0) {
			System.out.print(i);
		} else {
			if(i % 3 == 0) {
				System.out.print("Fizz");
			} 
			
			if(i % 5 == 0) {
				System.out.print("Buzz");
			}
		}
		System.out.print("\n");
	}

}
