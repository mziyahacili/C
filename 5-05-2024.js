
//#region 1

// const Car = {
//     Manufacturer: "Ford",
//     Model: "Focus",
//     YearOfManufacture: 2018,
//     AverageSpeed: 100,
//     Info: function() {
//         return `Manufacturer - ${this.   Manufacturer} 
//                 Model - ${this.Model}
//                 Year of Manufacture - ${this.YearOfManufacture}
//                 Average speed - ${this.AverageSpeed}`;
//     },
//     calculateTravelTime: function(distance) {
//         const travelHours = distance / this.AverageSpeed; 
//         const restCount = Math.floor(travelHours / 4);
//         const totalHours = travelHours + restCount; 
//         return totalHours;
//     }
// }

//#endregion




//#region 2
// const fraction = {
//     numerator: 0,
//     denominator: 1,


//     reduceFraction: function() {
//         const gcd = this.greatestCommonDivisor(this.numerator, this.denominator);
//         this.numerator /= gcd;
//         this.denominator /= gcd;
//     },


//     greatestCommonDivisor: function(a, b) {
//         if (b === 0) {
//             return a;
//         } else {
//             return this.greatestCommonDivisor(b, a % b);
//         }
//     },

//     addFraction: function(otherFraction) {
//         const newNumerator = this.numerator * otherFraction.denominator + otherFraction.numerator * this.denominator;
//         const newDenominator = this.denominator * otherFraction.denominator;
//         return { numerator: newNumerator, denominator: newDenominator };
//     },


//     subtractFraction: function(otherFraction) {
//         const newNumerator = this.numerator * otherFraction.denominator - otherFraction.numerator * this.denominator;
//         const newDenominator = this.denominator * otherFraction.denominator;
//         return { numerator: newNumerator, denominator: newDenominator };
//     },


//     multiplyFraction: function(otherFraction) {
//         const newNumerator = this.numerator * otherFraction.numerator;
//         const newDenominator = this.denominator * otherFraction.denominator;
//         return { numerator: newNumerator, denominator: newDenominator };
//     },

//     divideFraction: function(otherFraction) {
//         const newNumerator = this.numerator * otherFraction.denominator;
//         const newDenominator = this.denominator * otherFraction.numerator;
//         return { numerator: newNumerator, denominator: newDenominator };
//     }
// };



//#endregion




//#region 3

// const Time = {

//     hours: 0,
//     minutes: 0,
//     seconds: 0,

//     displayInfo: function(){
//         return `${this.hours}:${this.minutes}:${seconds}`;
//     },

//     changeTimeBySeconds: function(seconds) {
//         const totalSeconds = this.hours * 3600 + this.minutes * 60 + this.seconds + seconds;
//         this.hours = Math.floor(totalSeconds / 3600) % 24;
//         this.minutes = Math.floor(totalSeconds / 60) % 60;
//         this.seconds = totalSeconds % 60;
//     },


//     changeTimeByMinutes: function(minutes) {
//         this.changeTimeBySeconds(minutes * 60);
//     },

//     changeTimeByHours: function(hours) {
//         this.changeTimeBySeconds(hours * 3600);
//     }

// }


//#endregion