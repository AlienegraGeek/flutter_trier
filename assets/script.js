let testDiv = document.getElementById("testDiv");
testDiv.addEventListener('click', function f(e) {
    if(testDiv.style.background === 'green'){
        testDiv.setAttribute('style', 'background:red;')
    }else{
        testDiv.setAttribute('style', 'background:green;')
    }
    // testDiv.setAttribute('style', 'background:red;')
    console.log("style changed "+ testDiv.getAttribute('style'));
})