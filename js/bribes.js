function minimumBribes(q) {
    let bribes = 0;
    let isChaotic = false;
    let i = q.length - 1
    while (i > -1) {
        if (q[i] != i + 1) {
            if (i - 1 >= 0 && q[i - 1] == q[i]) {
                bribes += 1
                q[i - 2] = q[i - 1]
                q[i - 1] = q[i]
                q[i] = i + 1;
            } else if (i - 2 > -1 && q[i - 2] == q[i]) {
                bribes += 2
                let temp = q[i];
                q[i] = q[i - 2];
                q[i - 2] = temp;
            } else {
                isChaotic = true
                break
            }
        }
        --i;
    }
    console.log(isChaotic? "Too chaotic": bribes);
}