# boids

https://en.wikipedia.org/wiki/Boids
http://www.vergenet.net/~conrad/boids/pseudocode.html
https://github.com/gpolo/birdflocking
https://bucklescript.github.io/bucklescript/api/Js.html

Implementation of artificial life program "Boids"

# Basic Reason Template

Hello! This project allows you to quickly get started with Reason and BuckleScript. If you wanted a more sophisticated version, try the `react` template (`bsb -theme react -init .`).

# Build
```
npm run build
```

# Build + Watch

```
npm run start
```


# Editor
If you use `vscode`, Press `Windows + Shift + B` it will build automatically


```html
<!DOCTYPE html>
<html>
<body>

<canvas id="myCanvas" width="500" height="500" style="border:1px solid #d3d3d3;">
Your browser does not support the HTML5 canvas tag.</canvas>

<script>
var c = document.getElementById("myCanvas");
var ctx = c.getContext("2d");
ctx.fillStyle = 'black';
ctx.fillRect(0, 0, 500, 500);
const boid = (x, y, dir) => {
  const grad = ctx.createLinearGradient(x, y, x - 300, y);
  grad.addColorStop(0.25, "magenta");
  grad.addColorStop(1, "red");
  ctx.fillStyle = grad;
  ctx.beginPath();
  ctx.moveTo(x - 300, y - 150);
  ctx.lineTo(x, y);
  ctx.lineTo(x - 300, y + 150);
  ctx.fill();
};
boid(400, 250);
</script>
0
<p><strong>Note:</strong> The canvas tag is not supported in Internet 
Explorer 8 and earlier versions.</p>

</body>
</html>

```
