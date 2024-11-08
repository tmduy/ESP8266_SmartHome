String homePageContent =
{
"<!DOCTYPE html>"
"<html>"
"<head>"
"<title>Home</title>"
"<meta charset='utf-8'>"
"<meta name='viewport' content='width=device-width, initial-scale=1.0'>"
"<style>"
"html, body {"
"    height: 100%;"
"    margin: 0;"
"    display: flex;"
"    flex-direction: column;"
"}"
"body {"
"    font-size: 14px;"
"    color: #333;"
"    font-family: 'Roboto', sans-serif;"
"}"
".container {"
"    flex: 1;"
"}"
"img {"
"    display: block;"
"    margin: 10px auto 30px auto;"
"    max-width: 100%;"
"}"
"a, a:hover, a:active, a:focus, a:active:focus {"
"    color: #337ab7;"
"    text-decoration: none;"
"}"
"#main-menu {"
"    padding: 10px;"
"}"
"#main-menu ul {"
"    list-style-type: none;"
"    margin: 0;"
"    padding: 0;"
"    overflow: hidden;"
"    background-color: #e9d8f4;"
"}"
"#main-menu ul li {"
"    float: left;"
"    padding: 10px 15px;"
"}"
"#main-menu ul li.active {"
"    background-color: #81DAF5;"
"    color: white;"
"    font-weight: bold;"
"}"
".clear-float {"
"    clear: both;"
"}"
"#footer {"
"    width: 100%;"
"    padding: 0;"
"    text-align: center;"
"}"
"</style>"
"</head>"
"<body>"
"<div class='container'>"
"    <div id='main-menu'>"
"        <ul>"
"            <li class='active'><a href='./' title='Home'>Home</a></li>"
"            <li><a href='./ctrlpage' title='Control'>Control</a></li>"
"            <li><a href='./contact' title='Contact'>Contact</a></li>"
"            <li><a href='./faq' title='FAQ'>FAQ</a></li>"
"        </ul>"
"    </div>"
"    <div class='clear-float'></div>"
"    <div>"
"        <div><img src='./img/home.png' style='width:50%'></div>"
"    </div>"
"</div>"
"<div id='footer'><img src='./img/footer.png'></div>"
"</body>"
"</html>"
};

String controlPageContent =
{
"<!DOCTYPE html>"
"<html>"
"<head>"
"<meta http-equiv='Content-Type' content='text/html; charset=utf-8'>"
"<title>Control</title>"
"<meta name='viewport' content='width=device-width, initial-scale=1'>"
"<style>"
"html, body {"
"    height: 100%;"
"}"
"#main-menu {"
"    padding-top: 10px;"
"    padding-left: 10px;"
"    padding-bottom: 50px;"
"}"
"#main-menu ul {"
"    list-style-type: none;"
"    margin: 0;"
"    padding: 0;"
"    overflow: hidden;"
"    background-color: #e9d8f4;"
"}"
"#main-menu ul li {"
"    float: left;"
"    padding: 10px 15px;"
"    border-bottom: 1px;"
"}"
"#main-menu ul li.active {"
"    background-color: #81DAF5;"
"    color: white;"
"    font-weight: bold;"
"}"
".clear-float {"
"    clear: both;"
"}"
".container {"
"    width: 780px;"
"    margin: auto auto;"
"}"
"table, th, td {"
"    border: 2px solid hsl(51, 90%, 12%);"
"    border-collapse: collapse;"
"    margin-bottom: 50px;"
"}"
".b {"
"    width: 80px;"
"    height: 40px;"
"    font-size: 15px;"
"    background-color: #039708;"
"    border-radius: 10px;"
"    color: #FFFF;"
"    font-size: 20px"
"}"
".t {"
"    width: 80px;"
"    height: 40px;"
"    font-size: 15px;"
"    background-color: #f44336;"
"    border-radius: 10px;"
"    color: #FFFF;"
"    font-size: 20px"
"}"
"a, a:hover, a:focus, a:active, a:active:focus {"
"    color: #337ab7;"
"    text-decoration: none;"
"}"
"body {"
"    margin: 0 0;"
"    position: relative;"
"    font-size: 14px;"
"    font-family: 'Roboto', sans-serif;"
"}"
"img {"
"    max-width: 100%;"
"}"
"p {"
"    text-indent: 0px;"
"}"
"</style>"
"</head>"
"<body>"
"<div id='main-menu'>"
"    <ul>"
"        <li>"
"            <a href='./' title='Home'>Home</a>"
"        </li>"
"        <li class='active'>"
"            <a href='./ctrlpage' title='Control'>Control</a>"
"        </li>"
"        <li>"
"            <a href='./contact' title='Contact'>Contact</a>"
"        </li>"
"        <li>"
"            <a href='./faq' title='FAQ'>FAQ</a>"
"        </li>"
"    </ul>"
"</div>"
"<div class='clear-float'></div> <!-- clear float -->"
"<div>"
"    <p id='hvn' style='padding-left: 10px;'> </p>"
"    <p style='padding-left: 10px;'> <b> Below is the control panel of the devices in the house: </b> </p>"
"    <span style='padding-left: 10px;'> Alarm bell: </span> <span id='D3status'> </span>"
"    <table style='width:90%; text-align:center; font-size: 15px; margin-left:auto; margin-right:auto;'>"
"        <h1 style='text-align: center;'> CONTROL PANEL </h1>"
"        <tr style='text-align: center; background: #4CAF50; color: white'>"
"            <th> <p> LOCATION </p> </th>"
"            <th> <p> DEVICE </p> </th>"
"            <th> <p> STATUS </p> </th>"
"            <th colspan='2'> <p> ACTION </p> </th>"
"        </tr>"
"        <tr style='text-align: center'>"
"            <td> <p> LIVING ROOM </p> </td>"
"            <td> <p> Lighting</p> </td>"
"            <td> <p id='D1status'> </p> </td>"
"            <td> <a href='/turnonled1'><button class='b' onclick='getdata('onD1')'>ON</button></a> </td>"
"            <td> <a href='/turnoffled1'><button class='t' onclick='getdata('offD1')'>OFF</button></a> </td>"
"        </tr>"
"        <tr style='text-align: center'>"
"            <td> <p> BEDROOM </p> </td>"
"            <td> <p> Lighting</p> </td>"
"            <td> <p id='D2status'> </p> </td>"
"            <td> <a href='/turnonled2'><button class='b' onclick='getdata('onD2')'>ON</button></a> </td>"
"            <td> <a href='/turnoffled2'><button class='t' onclick='getdata('offD2')'>OFF</button></a> </td>"
"        </tr>"
"    </table>"
"</div>"
"<div>"
"    <table style='width:90%; text-align:center; margin-left:auto; margin-right:auto;'>"
"        <h1 style='text-align:center'> MONITORING PANEL </h1>"
"        <tr style='text-align: center; background: #4CAF50; font-size: 17px; color: white'>"
"            <th> <p> LOCATION </p> </th>"
"            <th> <p> PARAMETER </p> </th>"
"            <th> <p> VALUE </p></th>"
"        </tr>"
"        <tr style='text-align: center'>"
"            <td rowspan='2'> <p> KITCHEN AREA </p> </td>"
"            <td> <p> Temperature </p> </td>"
"            <td> <p id='D4status'> </p> </td>"
"        </tr>"
"        <tr style='text-align: center'>"
"            <td> <p> Gas detection </p> </td>"
"            <td> <p id='D5status'> </p> </td>"
"        </tr>"
"    </table>"
"</div>"
"<h2 style='padding-left: 10px;padding-bottom: 50px; color: red'> WARNING: In case of EMERGENCY, please contact via tmduybk@gmail.com </h2>"
"<div id='footer'>"
"    <img src='./img/footer.png' alt='footer' style='width:100%' >"
"</div>"
"<script>"
// Create request object
"function create_obj(){"
"    td = navigator.appName;"
"    if(td == 'Microsoft Internet Explorer'){"
"        obj = new ActiveXObject('Microsoft.XMLHTTP');"
"    }else{"
"        obj = new XMLHttpRequest();"
"    }"
"    return obj;"
"}"
"var xhttp = create_obj();"
// Set up data and send request
"function getdata(url){"
"    xhttp.open('GET', '/' + url, true);"
"    xhttp.onreadystatechange = process;" // Receive reponse
"    xhttp.send();"
"}"
// Check response
"function process() {"
"    if(xhttp.readyState == 4 && xhttp.status == 200){"
"        result_ = xhttp.responseText;"
"        document.getElementById('reponsetext').innerHTML=result_;"
"    }"
"}"
// Check the status of pins D3, D4, D5
"function getstatusD3D4D5() {"
"    xhttp.open('GET', 'getstatusD3D4D5', true);"
"    xhttp.onreadystatechange = process_json;"
"    xhttp.send();"
"}"
// Check response
"function process_json() {"
"    if(xhttp.readyState == 4 && xhttp.status == 200){"
"        var statusD1D2D3D4D5_JSON = xhttp.responseText;"
"        var Obj = JSON.parse(statusD1D2D3D4D5_JSON);"
"        document.getElementById('D1status').innerHTML = Obj.D1;"
"        document.getElementById('D2status').innerHTML = Obj.D2;"
"        document.getElementById('D3status').innerHTML = Obj.D3;"
"        document.getElementById('D4status').innerHTML = Obj.D4;"
"        document.getElementById('D5status').innerHTML = Obj.D5;"
"    }"
"}"
// Automatic data update function
"setInterval(function() {"
"    getstatusD3D4D5();"
"}, 1000);"
"</script>"
"<script>"
"var myVar = setInterval(function() { Clock(); }, 1000);"
"function Clock() {"
"    a = new Date();"
"    w = Array('Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday');"
"    var a = w[a.getDay()],"
"        w = new Date,"
"        d = w.getDate(),"
"        m = w.getMonth() + 1,"
"        y = w.getFullYear(),"
"        h = w.getHours(),"
"        mi = w.getMinutes(),"
"        se = w.getSeconds();"
"    if(10 > d) { d = '0' + d; }"
"    if(10 > m) { m = '0' + m; }"
"    if(10 > h) { h = '0' + h; }"
"    if(10 > mi) { mi = '0' + mi; }"
"    if(10 > se) { se = '0' + se; }"
"    document.getElementById('hvn').innerHTML = '' + a + ', ' + d + '/' + m + '/' + y + ' - ' + h + ':' + mi + ':' + se + '';"
"}"
"</script>"
"</body>"
"</html>"
};

String contactPageContent =
{
"<!DOCTYPE html>"
"<html>"
"<head>"
"<title>Contact</title>"
"<meta charset='utf-8'>"
"<style>"
"html, body {"
"  height: 100%;"
"}"
"body {"
"  margin: 0 0;"
"  position: relative;"
"  font-size: 14px;"
"  color: #333;"
"  font-family: 'Roboto', sans-serif;"
"}"
"img {"
"  max-width: 100%;"
"}"
"a, a:hover, a:active, a:focus, a:active:focus {"
"  color: #337ab7;"
"  text-decoration: none;"
"}"
"#main-menu {"
"  padding-top: 10px;"
"  padding-left: 10px;"
"  padding-bottom: 50px;"
"}"
"#main-menu ul {"
"  list-style-type: none;"
"  margin: 0;"
"  padding: 0;"
"  overflow: hidden;"
"  background-color: #e9d8f4;"
"}"
"#main-menu ul li {"
"  float: left;"
"  padding: 10px 15px;"
"  border-bottom: 1px;"
"}"
"#main-menu ul li.active {"
"  background-color: #81DAF5;"
"  color: white;"
"  font-weight: bold;"
"}"
".clear-float {"
"  clear: both;"
"}"
"</style>"
"</head>"
"<body>"
"<!-- menu -->"
"<div id='main-menu'>"
"<ul>"
"<li>"
"<a href='./' title='Home'>Home</a>"
"</li>"
"<li>"
"<a href='./ctrlpage' title='Control'>Control</a>"
"</li>"
"<li class='active'>"
"<a href='./contact' title='Contact'>Contact</a>"
"</li>"
"<li>"
"<a href='./faq' title='FAQ'>FAQ</a>"
"</li>"
"</ul>"
"</div>"
"<div class='clear-float'></div>"
"<div id='main-content' align='center'>"
"<div>"
"<iframe src='https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3919.4945995049425!2d106.65843061411644!3d10.773379562197537!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x31752ec3c161a3fb%3A0xef77cd47a1cc691e!2zVHLGsOG7nW5nIMSQ4bqhaSBo4buNYyBCw6FjaCBraG9hIC0gxJDhuqFpIGjhu41jIFF14buRYyBnaWEgVFAuSENN!5e0!3m2!1svi!2s!4v1615288067012!5m2!1svi!2s' width='600' height='450' style='border:0;' allowfullscreen='' loading='lazy'></iframe>"
"</div>"
"</div>"
"<p style='padding-left: 10px;'> Please contact tmduybk@gmail.com for your information. </p>"
"<div id='footer'>"
"<img src='./img/footer.png' alt='footer' style='width:100%'>"
"</div>"
"</body>"
"</html>"
};

String faqPageContent =
{
"<!DOCTYPE html>"
"<html>"
"<head>"
"<title>FAQ</title>"
"<meta charset='utf-8'>"
"<style>"
"html, body {"
"  height: 100%;"
"}"
"body {"
"  margin: 0 0;"
"  position: relative;"
"  font-size: 14px;"
"  color: #333;"
"  font-family: 'Roboto', sans-serif;"
"}"
".container {"
"  width: 780px;"
"  margin: auto auto;"
"}"
"img {"
"  max-width: 100%;"
"}"
"a, a:hover, a:active, a:focus, a:active:focus {"
"  color: #337ab7;"
"  text-decoration: none;"
"}"
"#main-menu {"
"  padding-top: 10px;"
"  padding-left: 10px;"
"  padding-bottom: 50px;"
"}"
"#main-menu ul {"
"  list-style-type: none;"
"  margin: 0;"
"  padding: 0;"
"  overflow: hidden;"
"  background-color: #e9d8f4;"
"}"
"#main-menu ul li {"
"  float: left;"
"  padding: 10px 15px;"
"  border-bottom: 1px;"
"}"
"#main-menu ul li.active {"
"  background-color: #81DAF5;"
"  color: white;"
"  font-weight: bold;"
"}"
".clear-float {"
"  clear: both;"
"}"
"#lightbox {"
"  position: fixed;"
"  z-index: 1;"
"  left: 0;"
"  top: 0;"
"  padding-top: 50px;"
"  width: 100%;"
"  height: 100%;"
"  display: none;"
"  background-color: rgba(0,0,0,0.8);"
"}"
"#image-placeholder {"
"  margin: auto;"
"  display: block;"
"  width: 80%;"
"}"
"#close-icon {"
"  position: absolute;"
"  top: 25px;"
"  right: 25px;"
"  color: #f1f1f1;"
"  font-size: 50px;"
"  cursor: pointer;"
"}"
".item-wrapper {"
"  margin-bottom: 20px;"
"  border: 1px solid #ddd;"
"  border-radius: 4px;"
"}"
".question {"
"  background-color: #f5f5f5;"
"  padding: 10px 15px;"
"}"
".answer {"
"  padding: 15px;"
"  display: none;"
"}"
".toggle-display {"
"  border: 1px solid #aaa;"
"  padding: 1px 5px;"
"  margin-right: 5px;"
"  cursor: pointer;"
"}"
"</style>"
"</head>"
"<body>"
"<div id='main-menu'>"
"<ul>"
"<li>"
"<a href='./' title='Home'>Home</a>"
"</li>"
"<li>"
"<a href='./ctrlpage' title='Control'>Control</a>"
"</li>"
"<li>"
"<a href='./contact' title='Contact'>Contact</a>"
"</li>"
"<li class='active'>"
"<a href='./faq' title='FAQ'>FAQ</a>"
"</li>"
"</ul>"
"</div>"
"<div class='clear-float'></div>"
"<div id='main-content'>"
"<div align='center'>"
"<img src='./img/faq.png' alt='FAQs' style='width:80%'>"
"</div>"
"<div class='item-wrapper'>"
"<div class='question'>"
"<strong class='toggle-display'>+</strong> If we have questions or are not satisfied with the service, which department can we complain to?"
"</div>"
"<div class='answer'>"
"If you are not satisfied with the service provided by our company, you can contact our Customer Care department, we are always willing to support any questions or complaints about the service."
"</div>"
"</div>"
"<div class='item-wrapper'>"
"<div class='question'>"
"<strong class='toggle-display'>+</strong> How long does it take to receive a response to a service inquiry or complaint?"
"</div>"
"<div class='answer'>"
"After receiving your inquiry or complaint, we will process the request within a maximum of 24 hours."
"</div>"
"</div>"
"<div class='item-wrapper'>"
"<div class='question'>"
"<strong class='toggle-display'>+</strong> Do customers receive an invoice when purchasing our services?"
"</div>"
"<div class='answer'>"
"Yes, all customers receive a VAT invoice for the services provided by our company."
"</div>"
"</div>"
"<div class='item-wrapper'>"
"<div class='question'>"
"<strong class='toggle-display'>+</strong> What is the payment process after ordering the service?"
"</div>"
"<div class='answer'>"
"After you order the service by phone, email or through any other valid transaction, you can pay via Internet Banking, ATM card or pay at our office."
"</div>"
"</div>"
"</div>"
"<div id='lightbox'>"
"<span id='close-icon'>&times;</span>"
"<img id='image-placeholder'>"
"</div>"
"<div id='footer'>"
"<img src='./img/footer.png' alt='footer' style='width:100%' >"
"</div>"
"<script>"
"var questions = document.getElementsByClassName('question');"
"for (var j = 0; j < questions.length; j++) {"
"  var question = questions[j];"
"  question.onclick = function () {"
"    var answer = this.nextElementSibling;"
"    var display = answer.style.display;"
"    answer.style.display = display == 'block' ? 'none' : 'block';"
"    var iconText = this.getElementsByClassName('toggle-display')[0].innerText;"
"    this.getElementsByClassName('toggle-display')[0].innerText = (iconText == '+') ? '-' : '+';"
"  }"
"}"
"</script>"
"</body>"
"</html>"
};
