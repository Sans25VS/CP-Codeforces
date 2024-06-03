const promise = new Promise(function (resolve, reject) {
    setTimeout(function(){
        resolve({username: "Sans", email: "SANS@YOO"})

    },1000 )
})    

promise.then(function(user){
    console.log(user);
})
const promiseFour = new Promise (function(resolve,reject){
    setTimeout(function(){
        resolve({Username1 :"Future", Kuchtokrega:"Haan voo bhi bhot badda"})
    },1000)
})
promiseFour.then(function(){
    console.log("Success")
})
const promiseFive = new Promise(function(resolve,reject){
    setTimeout(function(){
        let error = false;
        if(!error){
            resolve({username: "SANSOP"})
        } else {
            reject('Error: Something went wrong')
        }
        
    },1000)
})

promiseFive.then((user) =>{
    console.log(user);
    return user.username;    
})
.then((username)=>{
    console.log(username);
})
.catch((error) =>{
    console.log(error);
})
.finally(()=>{
    console.log("Success");
})

const prnmiseSix = new promise(function(resolve,reject ){
    setTimeout(function(){

    },1000)
})