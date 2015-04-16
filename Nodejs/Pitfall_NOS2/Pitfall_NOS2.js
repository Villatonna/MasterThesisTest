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

var stockpile = new Array(); 
for(i=0;i<20;i++){ 
	test = naiveMultiplier(7,10); 
	console.log(test.toString()); 
	stockpile.push(test); 
	console.log(stockpile.length); 
} 
test.oldresults = stockpile;
