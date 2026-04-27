function customrender(reactElement,container){
// const domelement=document.createElement(reactElement.type)
// domelement.innerHTML=reactElement.children
// domelement.setAttribute('href',reactElement.props.href)
// domelement.setAttribute('target',reactElement.props.type)
// container.appendChild(domelement)
// godd practice by loop
const domelement=document.createElement(reactElement.type)
domelement.innerHTML=reactElement.children
for (const prop in reactElement.props) {
    if(prop=='children') continue;
    domelement.setAttribute(prop,reactElement.props[prop])
        
    }
    container.appendChild(domelement)
}

const reactElement={
    type:'a',
    props:{
        href:'https://google.com',
        target:'_blank'
    },
    children:'click me to visit google'
}
const maincontainer=document.querySelector('#root')
customrender(reactElement,maincontainer)