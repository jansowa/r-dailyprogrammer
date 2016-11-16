package keprekarsRoutine;

public class KeprekarsRoutine {
	
	public static int largest_digit(int number){
		int max=0;
		while(number!=0){
			if(number%10>max){
				max = number%10;
			}
			number/=10;
		}
		return max;
	}
	
	public static int desc_digits(int number){
		int[] numbers = new int[4];
		for(int i=0; i<4; i++){
			numbers[i] = number%10;
			number/=10;
		}
		
		int tmp;
		if (numbers[0] > numbers[1]) { tmp = numbers[0]; numbers[0] = numbers[1]; numbers[1] = tmp; }
		if (numbers[2] > numbers[3]) { tmp = numbers[2]; numbers[2] = numbers[3]; numbers[3] = tmp; }
		if (numbers[0] > numbers[2]) { tmp = numbers[0]; numbers[0] = numbers[2]; numbers[2] = tmp; }
		if (numbers[1] > numbers[3]) { tmp = numbers[1]; numbers[1] = numbers[3]; numbers[3] = tmp; }
		if (numbers[1] > numbers[2]) { tmp = numbers[1]; numbers[1] = numbers[2]; numbers[2] = tmp; } 
	
		return numbers[0] + 10*numbers[1] + 100*numbers[2] + 1000*numbers[3];
	}
	
	public static int singleKepkarIteration(int number){
		int desc = desc_digits(number);
		int asc=0;
		int temp = desc;
		while(temp>0){
			asc=asc*10 + temp%10;
			temp/=10;
		}
		return desc-asc;
	}
	
	public static int keprekar(int number){
		int iterations = 0;
		int nextNumber;
		
		while(iterations>=0){
			nextNumber = singleKepkarIteration(number);
			if(number==nextNumber){
				return iterations;
			}
			iterations++;
			number=nextNumber;
		}
		
		return iterations;
	}
}
