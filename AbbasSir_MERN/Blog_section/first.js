function cal(a,b){
    return {sum: a+b,
            mul: a*b,
            sub: a-b,
            div: a/b
        };
}
add = cal(5,10);
console.log(add);
console.log((4||6)); // returns 4
console.log((4&&6)); // returns 6
console.log((0||6));        // returns 6
console.log((0&&6)); // returns 0
console.log((4&&0));       // returns 0
console.log((0||null));      // returns null
console.log((null&&6));      // returns null
console.log((null||undefined)); // returns undefined
console.log((undefined&&6));    // returns undefined
console.log((undefined||0));    // returns 0
console.log((0&&undefined));    // returns 0
console.log((4||null));     // returns 4
console.log((4&&null));     // returns null
console.log((4||undefined));    // returns 4
console.log((4&&undefined));    // returns undefined
console.log((null||6));      // returns 6
console.log((null&&0));     // returns null
console.log((undefined||6));    // returns 6
console.log((undefined&&0));            // returns undefined
console.log((0||0));    // returns 0
console.log((0&&0));    // returns 0
console.log((null||null));   // returns null
console.log((null&&null));  // returns null
console.log((undefined||undefined));    // returns undefined
console.log((undefined&&undefined));    // returns undefined
console.log((4||4));    // returns 4
console.log((4&&4));    // returns 4
console.log((4,7));   // returns 7

// ||
// && are logical operators in JavaScript. The || operator returns the first truthy value or the last value if none are truthy, while the && operator returns the first falsy value or the last value if none are falsy.
// The , operator evaluates both of its operands and returns the value of the second operand.