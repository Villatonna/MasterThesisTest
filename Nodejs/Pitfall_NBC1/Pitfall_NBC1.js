function naiveMultiplier(val,userInput){ 
		var result, i; 
		var multiplier=val; 
		var result_table = new Array(); 
		for (i=0; i<userInput; i++){ 
			result=multiplier*(i+1); 
			result_table.push(result); 
		} 
		return result_table; 
} 

var readline = require('readline'); 

var rl = readline.createInterface({ 
  input: process.stdin, 
  output: process.stdout 
}); 

var res; 
rl.question('Give number of multiplications\n\r', function(answer) { 
	test = naiveMultiplier(7,answer); 
	console.log(test.toString()); 
	rl.close();
}); 
