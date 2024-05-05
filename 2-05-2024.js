//#region 1

// function Foo(num1, num2)
// {
//     if (num1 < num2) {
//         return -1;
//     } else if (num1 > num2) {
//         return 1;
//     } else {
//         return 0;
//     }
// }
// let foo = Foo(3,2);
// console.log(foo);

//#endregion



//#region 2

// function Fact(number)
// {
//     if(number == 0 || number == 1){
//         return 1;
//     }else{
//         return number * Fact(number-1);
//     }
// }

// let foo = Fact(5);
// console.log(foo);
//#endregion 



//#region 3
// function Foo(num1,num2,num3){
//     return num1*100 + num2*10 + num3;
// }

// let foo = Foo(1,4,1);
// console.log(foo);
//#endregion



//#region 4
// function Area(lenght, width = null){
//     if(width == null){
//         return lenght * lenght;
//     }
//     else{
//         return width * lenght;
//     }
// }

// console.log(Area(5,10));
//#endregion





//#region 5
// function isPerfectNumber(number) {
//     let sum = 0;
//     for (let i = 1; i < number; i++) {
//         if (number % i == 0) {
//             sum += i;
//         }
//     }
//     return sum == number;
// }

// console.log(isPerfectNumber(28));
//#endregion





//#region 6

// function isPerfectNumber(number) {
//     let sum = 0;
//     for (let i = 1; i < number; i++) {
//         if (number % i == 0) {
//             sum += i;
//         }
//     }
//     return sum == number;
// }

// function findPerfectNumbers(min, max) {
//     for (let num = min; num <= max; num++) {
//         if (isPerfectNumber(num)) {
//             console.log(num);
//         }
//     }
// }


// findPerfectNumbers(1, 100);
//#endregion






//#region 7
// function Time(hours, minutes=null, seconds=null){

//     if(minutes == null && seconds == null){
//         minutes = '00';
//         seconds = '00';
//     }else if(seconds == null){
//         seconds = '00';
//     }else if(minutes == null){
//         minutes = '00';
//     }

//     console.log(`${hours}:${minutes}:${seconds}`);
// }

// Time(15,30,15);
//#endregion






//#region 8

// function Time(hours,minutes,seconds){
//     return hours * 3600 + minutes * 60 + seconds;
// }

// console.log(Time(1,30,15));

//#endregion





//#region 9

// function Time(seconds){
//     let hours = parseInt(seconds / 3600);
//     let minutes = parseInt((seconds % 3600) / 60);
//     let remainingSeconds = parseInt(seconds % 60);

//     return `${hours}:${minutes}:${remainingSeconds}`;
// }

// console.log(Time(5415)); 
//#endregion 






//#region 10

// function Time(hoursFirst, minutesFirst, secondsFirst, hoursSecond, minutesSecond, secondsSecond){
//     let firstDateSeconds = hoursFirst * 3600 + minutesFirst * 60 + secondsFirst;
//     let secondDateSeconds = hoursSecond * 3600 + minutesSecond * 60 + secondsSecond;

//     let diffSeconds = firstDateSeconds - secondDateSeconds;

//     let hours = parseInt(diffSeconds / 3600);
//     let minutes = parseInt((diffSeconds % 3600) / 60);
//     let remainingSeconds = parseInt(diffSeconds % 60);

//     return `${hours}:${minutes}:${remainingSeconds}`;

// }

// console.log(Time(12, 30, 15, 9, 45, 20));
//#endregion 
