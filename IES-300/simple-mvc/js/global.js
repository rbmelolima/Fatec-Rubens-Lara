function modelProduct() {
  const name = document.getElementById('name-product');
  const value = document.getElementById('value-product');
  const quantity = document.getElementById('qtd-product');
  const total = document.getElementById('total-value-product');

  return {
    name, value, quantity, total
  }
}

function onChangeQuantity(inputNumber) {
  update(inputNumber.value);
}

function update(newQuantity) {
  const { total, value, quantity} = modelProduct();

  const valueWithoutMask = parseFloat(
    value.innerHTML
      .substring(2)
      .replace('.', '')
      .replace(',', '.')
  );

  if(newQuantity <= 0 || newQuantity >= parseInt(quantity.max)) {
    quantity.value = quantity.min;
    return;
  }

  const newTotal = newQuantity * valueWithoutMask;
  total.innerHTML = newTotal.toLocaleString('pt-br', { style: 'currency', currency: 'BRL' });
}

(function onLoad(){
  update(1);
})()
