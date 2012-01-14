/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


(function ($) {
    $(function(){
        $(document).ready(function(){     
            $('#cmap').vectorMap({
                map: 'norway_en',
                //colors: cmapColordata,
                hoverColor: '#487BE4',
                backgroundColor: 'white',
                //titles: itemData,
                color: '#c8d8f7',
            
                onLabelShow: function(event, label, code){
                    if (!(code in cmapColordata)){
                        var test2 = label.text();
                        label.text('' + test2);
                    }
                },
                onRegionOver: function(event, code){
                    if (code == 'ca') {
                //event.preventDefault();
                }
                },
                onRegionClick: function(event, code){
                    if (code == 'us'){
                        

                        window.location.href = '/country/' + code;
                    } else {
                        //window.location.href = '/country/' + code;
                        event.preventDefault();
                        console.log(event);
                        console.log($('div#cmap.cmap-me'));
                    }
                
                }
            });
            
        });
    });  
    
})(jQuery); 