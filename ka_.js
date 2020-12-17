<script>
    jQuery( function($) {

        $(document).ready( function() {

            var botao = document.getElementById('uno');
            botao.onclick = function() {
                var somed = document.getElementsByClassName("elementor-field-group-rendadois");
                var somet = document.getElementsByClassName("elementor-field-group-rendatres");
                $(somed).css("visibility", "hidden");
                $(somet).css("visibility", "hidden");
            };

            var botao = document.getElementById('duo');
            botao.onclick = function() {
                var somed = document.getElementsByClassName("elementor-field-group-rendadois");
                var somet = document.getElementsByClassName("elementor-field-group-rendatres");
                $(somed).css("visibility", "visible");
                $(somet).css("visibility", "hidden");
            };

            var botao = document.getElementById('trio');
            botao.onclick = function() {
                var somed = document.getElementsByClassName("elementor-field-group-rendadois");
                var somet = document.getElementsByClassName("elementor-field-group-rendatres");
                $(somed).css("visibility", "visible");
                $(somet).css("visibility", "visible");
            };

            var botao = document.getElementById('form-field-FGTS-0');
            botao.onclick = function() {
                var FGTS = document.getElementsByClassName("elementor-field-group-VFGTS");
                $(FGTS).css("visibility", "visible");
            };

            var botao = document.getElementById('form-field-FGTS-1');
            botao.onclick = function() {
                var FGTS = document.getElementsByClassName("elementor-field-group-VFGTS");
                $(FGTS).css("visibility", "hidden");
            };
            
        })
    })
</script>