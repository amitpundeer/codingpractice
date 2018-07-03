/*
    Armstrong Number - An Armstrong Number of three digits is an integer such
    that the sum of the cubes its digits is equal to the number itself.
    Print TRUE if it is otherwise FALSE
*/

function isArmstrong(num)
{
    let res = 0, val = num
    
    while(val > 0)
    {
        res += Math.pow(val%10, 3)
        val = parseInt(val/10);
    }
    
    return res === num
}


var stdin = process.openStdin();
 
stdin.addListener("data", function(d) {
 
    const num = parseInt(d.toString().trim()) 
    
    let res = false;

    if(num != NaN)
        res = isArmstrong(num)
    
    console.log(res)

    process.exit()
})
