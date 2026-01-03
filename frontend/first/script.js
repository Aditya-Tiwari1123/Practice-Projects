let a = 10;
let b = 15;
if (a < b) {
    console.log("a is less than b");
} else {
    console.log("b is less than a");
}
for (let i = 0; i < 2; i++) {
    if(a % 2 === 0) {
        console.log(a + " is even");
    } else {
        console.log(a + " is odd");
    }
    a = b;
}