var assert = require('assert');

var dobro = Function(num){
	return (2 * num);
}


try{
	assert.equal(10,dobro(5));
} catch(e){
	console.log();
}