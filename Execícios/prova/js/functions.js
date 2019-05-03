  function shown(id) {
    id.style.opacity = "1"; 
    id.style.display = "inline"; 
  }

  function manda() {
    if (tg.value == "infinity") {
      var r = confirm("Você tem um cartão black sem limite?");
      if (r) {
        d.innerHTML = (`Camila, você é muito rica e gasta <i class="fas fa-infinity"></i> dinheiros por mês e <i class="fas fa-infinity"></i> dinheiros por ano`);
        shown(d);
      }else{
        d.innerHTML = (`Camila, você Não tem direito de adquirir o COMBO BREAKER COM TUDO INCLUSO 100% ATUALIZADO 2020 FULL HD 4K`);
        shown(d);
      }
    }else{
      var x = ((pi.value/2 + Number(tg.value))*(Number(vezes.value))).toFixed(2);
      var y = (x * 12).toFixed(2);
      d.innerHTML= (`Camila, você gasta R$${x} por mês e R$${y} por ano com suas idas ao cinema`);
      shown(d); 
    }
        
  }

  function add() {
      tg.innerHTML+=(`<option value="${pc.value}">${nc.value}</option>`);
      ad.style.opacity = "0";
      setTimeout(function () {
        ad.style.display = "none";
      }, 1000);        
  }

  function show() {
    if (tg.value == "show") {
      shown(ad);
    }
  }