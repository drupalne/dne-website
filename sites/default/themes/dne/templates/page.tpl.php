<?php
/**
 * Drupal North East
 * @author Richard Carter
 */
 global $base_url;
?>

<nav id="primary" role="navigation">
	<div class="wrapper">
    <?php print render($page['navigation']); ?>
	</div>
</nav>

<div class="wrapper" id="main-wrapper">	
	
	
	<header id="masthead" role="banner">
       			 <a title="<?php print t('Home'); ?>" rel="home" href="<?php print $front_page; ?>"><img src="<?php print  $base_url . '/' . path_to_theme(); ?>/images/drupal-north-east_logo.png" alt="<?php print t('Home'); ?>"/></a>
       			 <h2 class="site-slogan"><?php print $site_slogan; ?></h2>
       			 
				<?php print render($page['header']); ?>
				
				
				
				<aside>
				
				 <?php if ($sidebar_first = render($page['sidebar_first'])): ?>
			      <div id="sidebar-first" class="sidebar">
			        <?php print $sidebar_first; ?>
			      </div>
			    <?php endif; ?>
			    <?php if ($sidebar_second = render($page['sidebar_second'])): ?>
			      <div id="sidebar-second" class="sidebar">
			        <?php print $sidebar_second; ?>
			      </div>
			    <?php endif; ?>
			    

			<?php
				global $user;
				if ( $user->uid ) { 
					//logged in
				}
				else {
			?>
					<section id="register">
						<p>
						<a href="/user/register" title="Register a Drupal North East account">Register an account</a> and keep up to date with the community.
						</p>
					</section>
			<?php }	?>
					
					<section id="follow-us">
						<h1>Stay up to date</h1>
						<ul>
							<li><a href="http://twitter.com/drupalne" title="Drupal North East on Twitter"><img src="<?php print  $base_url . '/' . path_to_theme(); ?>/images/twitter.png" alt="Twitter" /></a>
							<li><a href="#" title="Drupal North East on Facebook"><img src="<?php print  $base_url . '/' . path_to_theme(); ?>/images/facebook.png" alt="Facebook" /></a>
						</ul>
					</section>
				</aside>
			</header>
			
	<section id="main-content">
			
			<article role="main" id="content">
				 <?php print $messages; ?>
			      <?php print render($title_prefix); ?>
			      <?php if ($title): ?>
			        <h1 class="title" id="page-title"><?php print $title; ?></h1>
			      <?php endif; ?>
			      <?php print render($title_suffix); ?>
			      <?php print render($page['help']); ?>
			      <?php if ($tabs = render($tabs)): ?>
			        <div class="tabs"><?php print $tabs; ?></div>
			      <?php endif; ?>
			      <?php if ($action_links): ?>
			        <ul class="action-links"><?php print render($action_links); ?></ul>
			      <?php endif; ?>
			      <div id="main-content" class="clearfix">
			        <?php print render($page['content']); ?>
			      </div>
			      <?php print $feed_icons; ?>
			</article>
		
	</section><!--/main-->
	
	<section id="follow-us-mobile">
		<h1>Stay up to date</h1>
				<a id="twitter-link" href="http://twitter.com/drupalne" title="Follow us on Twitter">Follow us on Twitter</a>
				<a id="drupaluk-link" href="http://www.drupal.org.uk/user_group/drupal-north-east" title="Join us on Drupal UK">Join us on Drupal UK</a>
	</section>
		
	<footer role="contentinfo" id="footer">
		<?php print render($page['footer']); ?>
		<?php print render($page['copyright']); ?>
		<a href="#masthead" title="Back to the top of the page"><img src="<?php print $base_url . '/' . path_to_theme(); ?>/images/top.png" alt="Back to the top of the page"></a>
	</footer>
		
		
	<?php if ($collapsible = render($page['collapsible'])): ?>
	  <section id="section-collapsible" class="section section-collapsible clearfix">
	    <h2 class="collapsible-toggle"><a href="#"><?php print t('Toggle collapsible region'); ?></a></h2>
	    <?php print $collapsible; ?>
	  </section>
	<?php endif; ?>