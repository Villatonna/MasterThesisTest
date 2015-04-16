function naiveMultiplier(val){ 
		var result, i; 
		var multiplier=val;
		//Creating Array object which stores results 
		var result_table = new Array(); 
		for (i=0; i<10; i++){ 
			result=multiplier*(i+1); 
			result_table.push(result); 
		} 
		return result_table; 
} 

var res; 
test = naiveMultiplier(7); 
console.log(test.toString());
