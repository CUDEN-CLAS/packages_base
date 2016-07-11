<div id="article-toggle-<?php print $bean->bid; ?>" class="article-grid-list">
  <div class="article-grid-list-filter">
    <div class="article-toggle-navigation" aria-hidden="true">
      <ul>
        <li>
          <a href="#article-toggle-grid-<?php print $bean->bid; ?>" class="article-toggle-grid-link" data-article-toggle-id="<?php print $bean->bid; ?>"><i class="fa fa-th" aria-hidden="true"></i> <span class="element-invisible">Grid</span></a>
        </li>
        <li>
          <a href="#article-toggle-list-<?php print $bean->bid; ?>" class="article-toggle-list-link" data-article-toggle-id="<?php print $bean->bid; ?>"><i class="fa fa-align-justify" aria-hidden="true"></i> <span class="element-invisible">Grid</span></a>
        </li>
      </ul>
    </div>
    <?php
      print render($content['exposed_filter']);
    ?>
  </div>


  <div id="article-toggle-grid-<?php print $bean->bid; ?>" class="article-toggle-section article-toggle-grid">
    <div class="row clearfix">
      <?php
        print render($content['article_grid']);
      ?>
    </div>

  </div>
  <div id="article-toggle-list-<?php print $bean->bid; ?>" class="article-toggle-section article-toggle-list">
    <?php
      print render($content['article_list']);
    ?>
  </div>
</div>
