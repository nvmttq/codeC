const x = document.querySelectorAll('.list-item .item .menu-link');
for(var i = 0; i < x.length; i++){
    x[i].addEventListener("click",function(e){
        console.log(Math.random());
    })
}