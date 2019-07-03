open Webapi.Dom;

let display = Document.querySelector("display", document);
let g = display.getContext("2d");

Js.log(g);
Js.log("Hello, BuckleScript and Reason!");
