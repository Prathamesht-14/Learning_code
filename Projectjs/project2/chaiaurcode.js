const form=document.querySelector('form')
form.addEventListener('submit',function(e){
    e.preventDefault();
    const weight=parseInt(document.querySelector('#weight').value)
    const height=parseInt(document.querySelector('#height').value)//input value and convert into int
    const results=document.querySelector('#results')
    if(height===''||height<0||isNaN(height)){
        results.innerHTML="please give valid height"
    }
    else if(weight===''||weight<0||isNaN(weight)){
        results.innerHTML="please give valid weight"
    }
    else {
        const bmi = (weight / ((height * height) / 10000)).toFixed(2);
        //show the result
        results.innerHTML=`<span>${bmi}</span>`
    }

}) 