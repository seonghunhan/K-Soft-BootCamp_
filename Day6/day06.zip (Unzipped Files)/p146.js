function sum(a, b) {
    return a + b;
}
function withdraw(account, amount){
    account.total -= amount;
}
console.log(sum(9, 7));
console.log(withdraw(9, 7));
