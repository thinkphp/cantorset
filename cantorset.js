function draw() {

	var canvas = document.getElementById("cantorset")

	    if(canvas.getContext) {

	       var context = canvas.getContext('2d')

	           cantorset(context, 0, 10, 900, 6)
	    }
}

function cantorset(context, x, y, width, level) {

         if(level == 1) {

         	context.beginPath() 
         	context.moveTo(x, y)
         	context.lineTo(x + width, y)
            context.strokeStyle = "#00FF40"
        	context.stroke()

         } else {

        	context.beginPath() 
         	context.moveTo(x,y)
         	context.lineTo(x + width, y)
            context.strokeStyle = "#00FF40"
        	context.stroke()
       
            cantorset(context, x                , y + 20 ,  width / 3, level - 1)     
            cantorset(context, x + 2 * width / 3, y + 20 ,  width / 3, level - 1)
         }
}

draw()
