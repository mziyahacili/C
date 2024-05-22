
let stylesArray = [
    {property: "color", value: "blue"},
    {property: "font-size", value: "18px"},
    {property: "text-align", value: "left"},
    {property: "text-decoration", value: "underline"},
    {property: "font-weight", value: "bold"}
];


function applyStylesAndDisplayText(styles, text) {

    let styleString = styles.map(style => `${style.property}: ${style.value}`).join("; ");

   
    let paragraph = `<p style="${styleString}">${text}</p>`;


    document.write(paragraph);
}


applyStylesAndDisplayText(stylesArray, "Hello, world!");
