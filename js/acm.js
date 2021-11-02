// const users = [
//   { name: "John", email: "john@gmail.com", age: 21 },
//   { name: "Ron", email: "Ron@gmail.com", age: 16 },
//   { name: "Kon", email: "kon@gmail.com", age: 23 },
//   { name: "Lary", email: "lary@gmail.com", age: 21 },
//   { name: "hon", email: "hon@gmail.com", age: 23 },
//   { name: "Johny", email: "johny@gmail.com", age: 28 },
//   { name: "hon", email: "hon@gmail.com", age: 23 },
//   { name: "Ron", email: "Ron@gmail.com", age: 16 },
//   { name: "John", email: "john@gmail.com", age: 25 },
//   { name: "Ron", email: "Ron@gmail.com", age: 16 },
//   { name: "Kon", email: "kon@gmail.com", age: 28 },
//   { name: "Lary", email: "lary@gmail.com", age: 21 },
//   { name: "hon", email: "hon@gmail.com1", age: 23 },
//   { name: "Johny", email: "johny@gmail.com", age: 28 },
//   { name: "hon", email: "hon@gmail.com3", age: 23 },
//   { name: "Ron", email: "Ron@gmail.com", age: 16 },
// ];

// // You can only use forEach, if else, array and object
// // De-Duplicate based on Name and age, so if Name and Age are same it is considered as Duplicate,
// // Email field is ignored.

// // // You can only use forEach, if else, array and object
// // // De-Duplicate based on Name and age, so if Name and Age are same it is considered as Duplicate,
// // // Email field is ignored.
// // let count = 0;
// // const filterData = [users[0]];
// // ++count;
// // users.forEach((user, userIndex, userArray) => {
// //   for (let index = userIndex; index >= 0; index--) {
// //     if (user.name === users[index].name && user.age === users[index].age) {
// //       ++count;
// //       flag = true;
// //       return;
// //     }
// //   }
// // });

// // console.log({ count });

// // let count = 0;
// // const filterData = [users[0]];
// // ++count;
// // users.forEach((user, userIndex, userArray) => {
// //   if(userIndex==2){
// //     userArray.length = users.length;
// //   }
// //   console.log({userArray});
// // });

// // console.log(users.length );

// // // You can only use forEach, if else, array and object
// // // De-Duplicate based on Name and age, so if Name and Age are same it is considered as Duplicate,
// // // Email field is ignored.
// // let count = 0;
// // const filterData = [users[0]];
// // ++count;
// // users.forEach((element) => {
// //   ++count;
// //   var flag = false;
// //   filterData.forEach((filteredElement) => {
// //     ++count;
// //     if (flag) {
// //       return;
// //     } else if (
// //       element.name === filteredElement.name &&
// //       element.age === filteredElement.age
// //     ) {
// //       ++count;
// //       flag = true;
// //       return;
// //     }
// //   });
// //   ++count;
// //   if (!flag) {
// //     ++count;
// //     filterData.push(element);
// //   }
// // });

// // console.log({ filterData: filterData });
// // console.log({ count });

// // const myNums = [1, 2, 3, 4, 5];
// // myNums.forEach((v, index, arr) => {
// //   if (v > 3) {
// //     arr.length = index + 1; // Behaves like `break`
// //   }
// //   console.log({arr});
// //   console.log(v);
// // })
// // let array1 = [
// //     { age: 20, name: "bob" },
// //     { age: 24, name: "Mike" },
// //     { age: 20, name: "Penny" },
// //     { age: 24, name: "Jeff" },
// //     { age: 25, name: "Mary" },
// //     { age: 20, name: "bob" },
// //     { age: 24, name: "Mike" },
// //     { age: 20, name: "Penny" },
// //     { age: 24, name: "Mike" },
// //     { age: 20, name: "Penny" },
// //     { age: 24, name: "Jeff" },
// //     { age: 25, name: "Mary" },
// //     { age: 20, name: "bob" },
// //     { age: 24, name: "Mike" },
// //     { age: 20, name: "Penny" },
// //   ];

// let myCount = 0;
// let result = [];
// ++myCount;
// let filteredData = [];
// ++myCount;
// users.forEach((e) => {
//   ++myCount;
//   if (result.indexOf(JSON.stringify({ name: e.name, age: e.age })) === -1) {
//     result.push(JSON.stringify({ name: e.name, age: e.age }));
//     ++myCount;
//     filteredData.push(e);
//     ++myCount;
//   }
//   ++myCount;
// });

// console.log(filteredData);
// console.log(myCount);

// // let count = 0;
// // let duplicate = {};
// // ++count;

// // // users.forEach((user) => {
// // //     duplicate[user.name + "__" + user.age] = 0;
// // //     ++count;
// // // });

// // users.forEach((user) => {
// //     duplicate[user.name + "__" + user.age] = (duplicate[user.name + "__" + user.age] || 0) +1;
// //     ++count;
// // });
// // ++count;
// // console.log(duplicate);
// // console.log({ count });

const address_parts = {
    street: "sdfdf",
    city: "",
    state: "some state",
    zip: "",
    country: "neo"
}

let result = [];
let myAddress = ""

Object.keys(address_parts).map((key, index)=>{
    if(address_parts[key]){
        result.push(address_parts[key])
    }
})

console.log(result.join(", "));

// result.map((value, index)=>{
//     if(index==0 && index!=result.length-1){
//         myAddress =  value + ", ";
//     }else if(index==0 && index==result.length-1){
//         myAddress =  value ;
//     }else if(index==result.length-1){
//         myAddress = myAddress + value;
//     }else {
//         myAddress = myAddress + value + ", " ;
//     }
// })

// console.log(result);
// console.log(myAddress);
// // const result = address_parts.street +","+address_parts.city +","+address_parts.state +","+address_parts.zip +","+address_parts.country;
// // console.log(result);