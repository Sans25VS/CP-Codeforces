let userinput = "sare jh sai accha"
var savedstr = userinput.split(" ")
.map(function (word) {
    return word.split("").reverse().join("");
});
console.log(savedstr.join(" "));



function check(ele){
    console.log(Array.isArray(ele));//constructor function
}
check([]);
check({});
// function to reverse
function reverse(num){
    var rev;
    while(num>0){
        var rem = num%10;
        num = Math.floor(num/10);
        rev = rev*10+rem;
    }
    return rev;
}
// function to captalise each starting word
function capitalword(str){
    var upperwords = str.split(" ").map(function(word){
         return word.charAt(0).toUpperCase() + word.substring(1); 
    })
    return upperwords.join(" ");
}
console.log(capitalword(areey baaap rree));
// hash table in javascriprt
function occ(str){
    var occurences = {};
    str.split("").forEach(function(ele){
        if(occurences.hasOwnProperty(ele)){
            occurences[ele] = 1;
        }
        else{
            occurences[ele]++;
        }
    })
    return occurences;
}
// sum in an array
let arr = [1,2,3,4,5];
let sum = 0 ;
arr.forEach(function(ele){
    sum+=ele;
})
console.log(sum);